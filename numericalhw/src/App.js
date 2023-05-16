import React from 'react';
import { BrowserRouter as Router, Route, Switch } from 'react-router-dom';
import Question1 from './pages/Question1';
import Question2 from './pages/Question2';
import Question3 from './pages/Question3';
import home from './pages/home'
function App() {
  return (
    <Router>
      <div>
        <Switch>
          <Route exact path="/" component={home} />
          <Route path="/Question1" component={Question1} />
          <Route path="/Question2" component={Question2} />
          <Route path="/Question3" component={Question3} />
        </Switch>
      </div>
    </Router>
  );
}

export default App;
