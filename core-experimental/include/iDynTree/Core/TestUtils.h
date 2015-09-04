/*
 * Copyright (C) 2015 Fondazione Istituto Italiano di Tecnologia
 * Authors: Silvio Traversaro
 * CopyPolicy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT
 *
 */

#ifndef IDYNTREE_TEST_UTILS_H
#define IDYNTREE_TEST_UTILS_H

#include <iDynTree/Core/IVector.h>
#include <iDynTree/Core/IMatrix.h>
#include <iDynTree/Core/Utils.h>

#include <string>

namespace iDynTree
{
    class Transform;
    class SpatialMotionVector;
    class SpatialForceVector;

#define ASSERT_EQUAL_DOUBLE(val1,val2) assertDoubleAreEqual(val1,val2,iDynTree::DEFAULT_TOL,__FILE__,__LINE__)
#define ASSERT_EQUAL_VECTOR(val1,val2) assertVectorAreEqual(val1,val2,iDynTree::DEFAULT_TOL,__FILE__,__LINE__)
#define ASSERT_EQUAL_SPATIAL_MOTION(val1,val2) assertSpatialMotionAreEqual(val1,val2,iDynTree::DEFAULT_TOL,__FILE__,__LINE__)
#define ASSERT_EQUAL_SPATIAL_FORCE(val1,val2) assertSpatialForceAreEqual(val1,val2,iDynTree::DEFAULT_TOL,__FILE__,__LINE__)
#define ASSERT_EQUAL_MATRIX(val1,val2) assertMatrixAreEqual(val1,val2,iDynTree::DEFAULT_TOL,__FILE__,__LINE__)
#define ASSERT_EQUAL_TRANSFORM(val1,val2) assertTransformAreEqual(val1,val2,iDynTree::DEFAULT_TOL,__FILE__,__LINE__)

    void assertDoubleAreEqual(const double & val1, const double & val2, double tol = DEFAULT_TOL, std::string file="", int line=-1);

    /**
     * Assert that two vectors are equal, and
     * exit with EXIT_FAILURE if they are not.
     *
     */
    void assertVectorAreEqual(const IVector & vec1, const IVector & vec2, double tol = DEFAULT_TOL, std::string file="", int line=-1);

    /**
     * Assert that two matrices are equal, and
     * exit with EXIT_FAILURE if they are not.
     *
     */
    void assertMatrixAreEqual(const IMatrix & mat1, const IMatrix & mat2, double tol = DEFAULT_TOL, std::string file="", int line=-1);

    /**
     * Assert that two transforms are equal, and
     * exit with EXIT_FAILURE if they are not.
     *
     */
    void assertTransformsAreEqual(const Transform & trans1, const Transform & trans2, double tol = DEFAULT_TOL, std::string file="", int line=-1);

    /**
     * Assert that two spatial motion vectors are equal,
     * and exit with EXIT_FAILURE if they are not.
     *
     */
    void assertSpatialMotionAreEqual(const SpatialMotionVector & t1, const SpatialMotionVector & t2, double tol = DEFAULT_TOL, std::string file="", int line=-1);

    /**
     * Assert that two spatial force vectors are equal,
     * and exit with EXIT_FAILURE if they are not.
     *
     */
    void assertSpatialForceAreEqual(const SpatialForceVector & f1, const SpatialForceVector & f2, double tol = DEFAULT_TOL, std::string file="", int line=-1);


}

#endif