#lang racket

(define (regrouper-aux l acc)
 ; (if (null? l) '()
  ;    (cons (if (and (not (null? (cadr l))) (= (car l) (car (cdr l))))
   ;             (regroupe (cdr l) (cons (car l) '()))
    ;                      (cons (car l) acc))   (regroupe (cdr l) '()))))
  (cond
    ; cas 1 on traville sur une liste vide 
    ((and (null? l) (null? acc)) '())
    ; cas 2 fin de travail bout de liste
    ((null? l) (list acc))
    ; cas 3 debut de travail sur une liste non vide
    ((null? acc) (regrouper-aux (cdr l) (cons (car l) acc)))
    ;cas 4 on continue d'ajouter dans le groupe encours
    ((= (car l) (car acc)) (regrouper-aux (cdr l) (cons (car l) acc)))
    ; cas 5 on passe d'un groupe a un autre
    (else
       (cons acc (regrouper-aux (cdr l) (list (car l)))))))

(define (regrouper l)
        (regrouper-aux l '()))

(define (encode l)
  (let ((rl (regrouper l)))
    (map (lambda (l) (cons (car l) (cons (length l) '()))) rl)))
;3
(define (decode l)
    (if (null? l) '()
      (cons (decode-aux (car l)) (decode (cdr l)))))
  
(define (decode-aux l)
  (if (zero? (cadr l)) '()
      (cons (car l) (decode-aux (list (car l) (- (cadr l) 1))))))