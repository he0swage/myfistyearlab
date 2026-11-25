x = 0:0.1:2*pi;
y1 = sin(x);
y2 = cos(x);

figure;
plot(x, y1, 'r--');  % 's--' corrigé en 'r--' (style ligne)
hold on;             % Correction des deux-points
plot(x, y2, 'b-');
legend('sin(x)', 'cos(x)');  % Légende complétée
xlabel('Time (s)');          % Étiquette corrigée
ylabel('Amplitude');         % Remplace label('lap(1)')
title('sin(k) & cos(x)');    % Ajout d'un titre
grid on;rille (optionnel)