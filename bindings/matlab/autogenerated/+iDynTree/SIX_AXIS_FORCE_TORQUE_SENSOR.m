function v = SIX_AXIS_FORCE_TORQUE_SENSOR()
  persistent vInitialized;
  if isempty(vInitialized)
    vInitialized = iDynTreeMEX(0, 20);
  end
  v = vInitialized;
end
