<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: calculator.proto

namespace Calc;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>calc.Request</code>
 */
class Request extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>int32 a = 1;</code>
     */
    private $a = 0;
    /**
     * Generated from protobuf field <code>int32 b = 2;</code>
     */
    private $b = 0;

    public function __construct() {
        \GPBMetadata\Calculator::initOnce();
        parent::__construct();
    }

    /**
     * Generated from protobuf field <code>int32 a = 1;</code>
     * @return int
     */
    public function getA()
    {
        return $this->a;
    }

    /**
     * Generated from protobuf field <code>int32 a = 1;</code>
     * @param int $var
     * @return $this
     */
    public function setA($var)
    {
        GPBUtil::checkInt32($var);
        $this->a = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>int32 b = 2;</code>
     * @return int
     */
    public function getB()
    {
        return $this->b;
    }

    /**
     * Generated from protobuf field <code>int32 b = 2;</code>
     * @param int $var
     * @return $this
     */
    public function setB($var)
    {
        GPBUtil::checkInt32($var);
        $this->b = $var;

        return $this;
    }

}

