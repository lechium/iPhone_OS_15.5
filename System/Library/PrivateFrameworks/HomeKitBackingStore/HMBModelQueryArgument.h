//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;
@protocol HMBQueryableModelFieldCoder;

@interface HMBModelQueryArgument : HMFObject
{
    NSString *_propertyName;	// 8 = 0x8
    id <HMBQueryableModelFieldCoder> _defaultValue;	// 16 = 0x10
}

+ (id)argumentWithPropertyName:(id)arg1 defaultValue:(id)arg2;	// IMP=0x000000000005a0e1
+ (id)argumentWithPropertyName:(id)arg1;	// IMP=0x000000000005a092
- (void).cxx_destruct;	// IMP=0x000000000005a061
@property(readonly, nonatomic) id <HMBQueryableModelFieldCoder> defaultValue; // @synthesize defaultValue=_defaultValue;
@property(readonly, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
- (id)initWithPropertyName:(id)arg1 defaultValue:(id)arg2;	// IMP=0x0000000000059f9d

@end
