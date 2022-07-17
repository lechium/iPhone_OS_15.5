//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface MLParameterContainer : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_currentParameterValues;	// 8 = 0x8
    NSArray *_parameterKeys;	// 16 = 0x10
    NSDictionary *_parameterDescriptions;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007e855
+ (id)parameterContainerFor:(id)arg1 descriptions:(id)arg2;	// IMP=0x000000000007e5b2
- (void).cxx_destruct;	// IMP=0x000000000007e57f
@property(retain, nonatomic) NSDictionary *parameterDescriptions; // @synthesize parameterDescriptions=_parameterDescriptions;
@property(retain, nonatomic) NSArray *parameterKeys; // @synthesize parameterKeys=_parameterKeys;
@property(retain, nonatomic) NSMutableDictionary *currentParameterValues; // @synthesize currentParameterValues=_currentParameterValues;
- (id)description;	// IMP=0x000000000007e399
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007e04c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007df69
- (_Bool)validateParameterValue:(id)arg1 givenConstraint:(id)arg2;	// IMP=0x000000000007dc8b
- (_Bool)setCurrentValue:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007d77d

@end
