//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PKInkProperties : NSObject
{
}

+ (id)arrayForBezierControlPoints:(CDStruct_3ead2808)arg1;	// IMP=0x0000000000145f60
+ (_Bool)bezierControlPoints:(CDStruct_3ead2808)arg1 isEqual:(CDStruct_3ead2808)arg2;	// IMP=0x0000000000145e77
+ (unsigned long long)functionTypeForBezierControlPoints:(CDStruct_3ead2808)arg1;	// IMP=0x0000000000145c58
+ (CDStruct_3ead2808)controlPointsForFunctionType:(unsigned long long)arg1;	// IMP=0x0000000000145bb4
+ (unsigned long long)functionTypeForName:(id)arg1;	// IMP=0x0000000000145b1a
+ (id)functionNames;	// IMP=0x0000000000145b0d
+ (id)inputNames;	// IMP=0x0000000000145b00
+ (id)inputMaskNames;	// IMP=0x0000000000145af3
+ (id)inkPropertyNames;	// IMP=0x0000000000145ae6
+ (id)inkTypeNames;	// IMP=0x0000000000145ad9
+ (id)blendModeNames;	// IMP=0x0000000000145acc
+ (double)defaultValueForInput:(unsigned long long)arg1;	// IMP=0x0000000000145aac
+ (CDStruct_c3b9c2ee)rangeForInput:(unsigned long long)arg1;	// IMP=0x0000000000145a75
+ (CDStruct_c3b9c2ee)rangeForInkProperty:(unsigned long long)arg1;	// IMP=0x0000000000145a50

@end

