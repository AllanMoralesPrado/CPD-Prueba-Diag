SELECT courses.name AS nombre_del_curso,
courses.start_date AS inicio_curso,
AVG(evaluations.score) AS promedio_de_notas,
STDEVP(evaluations.score) AS desviacion_estandar,
MIN(evaluations.score) AS nota_minima,
MAX(evaluations.score) AS nota_maxima
FROM courses c, evaluations e, exams i
WHERE c.pk = i.pk AND i.pk = e.pk
GROUP BY courses.name, courses.start_date  