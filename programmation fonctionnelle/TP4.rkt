#lang racket
(define (mymap-aux f l acc)
  (if (null? l) acc
      (mymap-aux f (cdr l) (cons (f (car l)) acc))))

(define (mymap f l)
  (reverse (mymap-aux f l '())))

(define (foldl f acc l)
  (if (null? l) acc
      (foldl f (f acc (car l)) (cdr l))))
(define (somme l)
  (foldl + 0 l))
(define (produit l)
  (foldl * 1 l))
;4
(foldl (lambda (a b) (+ (* a 2) b)) 1 '(19 57 25 11 7 13))
;5
(define (last l)
  (foldl (lambda (a b) b) '() l))
;6
(define (deTruquer n)
  (lambda () (if (> (random 10) 4) n (+ (random 7) 1))))

;7
(define (scanl f acc l)
  (if (null? l) '()
      (cons (f acc (car l)) (scanl f (f acc (car l)) (cdr l)))
      ))

;8

(define (foldr f acc l)
  (if (null? l) acc
      (f (car l) (foldr f acc (cdr l)))))

;9

(define (duplication l)
  (foldr (lambda (x y) (cons x (cons x y))) '() l))

;10 a revoir

(define (filter f l)
  (foldr (lambda (x y) (if (f x) (cons x y) '())) '() l))