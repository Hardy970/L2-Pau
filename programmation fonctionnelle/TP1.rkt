
;my comment

(define
  (mymax liste)
 
      (if (null? (cdr liste))
          (car liste)
          (let ((m (mymax (cdr liste))))
                (if (> (car liste) m)
                    (car liste)
                    m
                 )
           )

  ))

;(define (myavg liste)
  ;(if (null? (cdr liste))
     ; (car liste)
      ;(let
          ;((sum (+ (car liste) (myavg (cdr liste)))) (+ 1 (myavg (cdr liste))))
      ; )

; ))

(let
    ((x 10))
    (* x x)
    )
