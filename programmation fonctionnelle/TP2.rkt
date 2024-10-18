; question 3
(define (kColMatrice l k)
  (if (null? l) '()
      (cons (kEltListe k (car l)) (kColMatrice (cdr l) k))))


(define (kEltListe k l)
  (if (zero? k) (car l)
      (kEltListe (- k 1) (cdr l))))

; question 4

(define (tablen-aux k n)
  (if (zero? n) '()
      (cons (* k n) (tablen k (- n 1)))))
(define (tablen k n) (reverse (tablen-aux k n) ))

(define (ntable-aux k n)
  (if (zero? n) '()
      (cons (tablen k n) (ntable-aux (- k 1) n))))

(define (ntable n) (reverse (ntable-aux n n)))
