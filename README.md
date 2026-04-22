<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>

<body>

<div class="container">

<h1>🟩 BSQ — Biggest Square</h1>
<p><strong>Find the largest possible square in a map… without hitting obstacles.</strong></p>

<div class="card">
<h2>📌 What is this?</h2>
<p><strong>BSQ (Biggest Square)</strong> is a classic 42 Piscine project.</p>
<p>You are given a map of empty spaces and obstacles. The goal is to find the biggest square made only of empty spaces and display it.</p>
</div>

<div class="card">
<h2>🧠 Concept</h2>
<p>Each map uses:</p>
<ul>
    <li><code>.</code> → empty space</li>
    <li><code>o</code> → obstacle</li>
    <li><code>x</code> → solution</li>
</ul>
<p>Rules:</p>
<ul>
    <li>Find the largest square</li>
    <li>Replace it with <code>x</code></li>
    <li>If multiple → choose top, then left</li>
</ul>
</div>

<div class="card">
<h2>📂 Input Format</h2>
<p>First line:</p>
<pre><code>&lt;number_of_lines&gt;&lt;empty_char&gt;&lt;obstacle_char&gt;&lt;full_char&gt;</code></pre>

<p>Example:</p>
<pre><code>9.ox</code></pre>
</div>

<div class="card">
<h2>🧾 Example</h2>

<p><strong>Input:</strong></p>
<pre><code>...........................
....o......................
............o..............
...........................
....o......................
...............o...........
...........................
......o..............o.....
..o.......o................</code></pre>

<p><strong>Output:</strong></p>
<pre><code>.....xxxxxxx...............
....oxxxxxxx...............
.....xxxxxxxo..............
.....xxxxxxx...............
....oxxxxxxx...............
.....xxxxxxx...o...........
.....xxxxxxx...............
......o..............o.....
..o.......o................</code></pre>

</div>

<div class="card">
<h2>⚠️ Map Rules</h2>
<ul>
    <li>All lines must have the same length</li>
    <li>At least one line and one column</li>
    <li>Only declared characters allowed</li>
</ul>

<p class="warning">Invalid map → map error</p>
</div>

<div class="card">
<h2>⚙️ Usage</h2>

<p><strong>Compile:</strong></p>
<pre><code>make</code></pre>

<p><strong>Run:</strong></p>
<pre><code>./bsq map_file</code></pre>

<p><strong>Multiple files:</strong></p>
<pre><code>./bsq map1 map2 map3</code></pre>

<p><strong>Standard input:</strong></p>
<pre><code>./bsq</code></pre>

</div>

<div class="card">
<h2>🔧 Allowed Functions</h2>
<div class="tag">read</div>
<div class="tag">write</div>
<div class="tag">open</div>
<div class="tag">close</div>
<div class="tag">malloc</div>
<div class="tag">free</div>
<div class="tag">exit</div>
</div>

<div class="card">
<h2>📁 Project Structure</h2>
<pre><code>.
├── Makefile
├── bsq
├── src/
├── includes/
└── auteur</code></pre>

<p><strong>auteur file:</strong></p>
<pre><code>login1:login2</code></pre>
</div>

<div class="card">
<h2>🏁 Evaluation</h2>
<ul>
    <li><strong>Functionality (10 pts)</strong></li>
    <li><strong>Optimization (10 pts)</strong></li>
</ul>
<p>Speed and memory usage matter.</p>
</div>

<div class="card">
<h2>🚀 Summary</h2>
<ul>
    <li>Parse input</li>
    <li>Validate map</li>
    <li>Find biggest square</li>
    <li>Display result</li>
</ul>
</div>

<footer>
    Built for 42 Piscine — BSQ Project
</footer>

</div>

</body>
</html>
