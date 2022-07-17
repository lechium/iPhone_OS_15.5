//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXMChartDescriptor, AXMDataRegressionModel, AXMDataSeriesDescriptor, NSArray, NSNumberFormatter, NSString;
@protocol AXMDataSummaryCategoryNameProvider;

@interface AXMDataSummary : NSObject
{
    AXMDataSeriesDescriptor *_series;	// 8 = 0x8
    AXMChartDescriptor *_chartDescriptor;	// 16 = 0x10
    NSArray *_dataFeatureDescriptions;	// 24 = 0x18
    NSArray *_statsDescriptions;	// 32 = 0x20
    AXMDataRegressionModel *_regressionModel;	// 40 = 0x28
    unsigned long long _numValues;	// 48 = 0x30
    double _r;	// 56 = 0x38
    double _rSquared;	// 64 = 0x40
    double _minX;	// 72 = 0x48
    double _maxX;	// 80 = 0x50
    double _meanX;	// 88 = 0x58
    double _varianceX;	// 96 = 0x60
    double _minY;	// 104 = 0x68
    double _maxY;	// 112 = 0x70
    double _meanY;	// 120 = 0x78
    double _varianceY;	// 128 = 0x80
    double _covariance;	// 136 = 0x88
    double _slope;	// 144 = 0x90
    double _intercept;	// 152 = 0x98
    NSArray *_residuals;	// 160 = 0xa0
    NSArray *_outliers;	// 168 = 0xa8
    NSObject<AXMDataSummaryCategoryNameProvider> *_categoryNameDelegate;	// 176 = 0xb0
    NSNumberFormatter *_numberFormatter;	// 184 = 0xb8
    NSArray *_xValues;	// 192 = 0xc0
    NSArray *_yValues;	// 200 = 0xc8
    NSArray *_axisTitles;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0000000000088aa8
@property(retain, nonatomic) NSArray *axisTitles; // @synthesize axisTitles=_axisTitles;
@property(retain, nonatomic) NSArray *yValues; // @synthesize yValues=_yValues;
@property(retain, nonatomic) NSArray *xValues; // @synthesize xValues=_xValues;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
@property(nonatomic) __weak NSObject<AXMDataSummaryCategoryNameProvider> *categoryNameDelegate; // @synthesize categoryNameDelegate=_categoryNameDelegate;
@property(readonly, nonatomic) NSArray *outliers; // @synthesize outliers=_outliers;
@property(readonly, nonatomic) NSArray *residuals; // @synthesize residuals=_residuals;
@property(readonly, nonatomic) double intercept; // @synthesize intercept=_intercept;
@property(readonly, nonatomic) double slope; // @synthesize slope=_slope;
@property(readonly, nonatomic) double covariance; // @synthesize covariance=_covariance;
@property(readonly, nonatomic) double varianceY; // @synthesize varianceY=_varianceY;
@property(readonly, nonatomic) double meanY; // @synthesize meanY=_meanY;
@property(readonly, nonatomic) double maxY; // @synthesize maxY=_maxY;
@property(readonly, nonatomic) double minY; // @synthesize minY=_minY;
@property(readonly, nonatomic) double varianceX; // @synthesize varianceX=_varianceX;
@property(readonly, nonatomic) double meanX; // @synthesize meanX=_meanX;
@property(readonly, nonatomic) double maxX; // @synthesize maxX=_maxX;
@property(readonly, nonatomic) double minX; // @synthesize minX=_minX;
@property(readonly, nonatomic) double rSquared; // @synthesize rSquared=_rSquared;
@property(readonly, nonatomic) double r; // @synthesize r=_r;
@property(nonatomic) unsigned long long numValues; // @synthesize numValues=_numValues;
@property(readonly, nonatomic) AXMDataRegressionModel *regressionModel; // @synthesize regressionModel=_regressionModel;
@property(retain, nonatomic) NSArray *statsDescriptions; // @synthesize statsDescriptions=_statsDescriptions;
@property(retain, nonatomic) NSArray *dataFeatureDescriptions; // @synthesize dataFeatureDescriptions=_dataFeatureDescriptions;
@property(nonatomic) __weak AXMChartDescriptor *chartDescriptor; // @synthesize chartDescriptor=_chartDescriptor;
@property(nonatomic) __weak AXMDataSeriesDescriptor *series; // @synthesize series=_series;
- (double)positionForYAxisValue:(double)arg1;	// IMP=0x000000000008882e
- (double)positionForXAxisValue:(double)arg1;	// IMP=0x00000000000887a8
- (void)getValues:(double *)arg1 fromNSNumberArray:(id)arg2;	// IMP=0x00000000000886ec
- (double)getVariance:(id)arg1;	// IMP=0x00000000000884e2
- (double)getMedian:(id)arg1;	// IMP=0x0000000000088345
- (double)getMean:(id)arg1;	// IMP=0x0000000000088155
- (id)stringForComponents:(id)arg1;	// IMP=0x0000000000087ef1
- (id)description;	// IMP=0x0000000000087de4
- (void)computeOutliers;	// IMP=0x0000000000087c22
- (void)computeResiduals;	// IMP=0x0000000000087a2c
- (void)computeLinearRegression;	// IMP=0x00000000000879f2
- (void)computeR;	// IMP=0x00000000000879c1
- (void)computeVariances;	// IMP=0x000000000008783a
- (void)computeCovariance;	// IMP=0x00000000000876c6
- (void)computeMeans;	// IMP=0x0000000000087553
- (void)computeRanges;	// IMP=0x00000000000873b2
- (void)compute;	// IMP=0x0000000000087336
@property(readonly, nonatomic) NSString *bestFitCurveEquation;
@property(readonly, nonatomic) NSString *outliersDescription;
@property(readonly, nonatomic) NSString *medianValueDescription;
@property(readonly, nonatomic) NSString *meanValueDescription;
@property(readonly, nonatomic) NSString *maxValueDescription;
@property(readonly, nonatomic) NSString *minValueDescription;
@property(readonly, nonatomic) NSString *confidenceDescription;
@property(readonly, nonatomic) NSString *slopeDescription;
@property(readonly, nonatomic) NSString *modelDescription;
- (void)setRegressionModel:(id)arg1;	// IMP=0x0000000000086505
- (void)computeRegressionModel:(CDUnknownBlockType)arg1;	// IMP=0x000000000008606b
- (id)initWithSeries:(id)arg1 chartDescriptor:(id)arg2;	// IMP=0x0000000000085d70

@end
