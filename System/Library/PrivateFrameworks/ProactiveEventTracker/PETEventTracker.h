//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol PETLoggingOutlet;

@interface PETEventTracker : NSObject
{
    _Bool _testingMode;	// 8 = 0x8
    NSString *_featureId;	// 16 = 0x10
    NSArray *_registeredProperties;	// 24 = 0x18
    NSArray *_propertySubsets;	// 32 = 0x20
    id <PETLoggingOutlet> _loggingOutlet;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000d0cd
@property(readonly, nonatomic) id <PETLoggingOutlet> loggingOutlet; // @synthesize loggingOutlet=_loggingOutlet;
@property(readonly, nonatomic) _Bool testingMode; // @synthesize testingMode=_testingMode;
@property(readonly, nonatomic) NSArray *propertySubsets; // @synthesize propertySubsets=_propertySubsets;
@property(readonly, nonatomic) NSArray *registeredProperties; // @synthesize registeredProperties=_registeredProperties;
@property(readonly, nonatomic) NSString *featureId; // @synthesize featureId=_featureId;
- (void)disableTestingMode;	// IMP=0x000000000000d066
- (id)getValueForKey:(id)arg1;	// IMP=0x000000000000d000
- (id)getKeyValueDict;	// IMP=0x000000000000cfd1
- (void)_checkInTestingMode;	// IMP=0x000000000000cf71
- (void)enableTestingMode;	// IMP=0x000000000000cf44
- (void)_setLoggingOutlet:(id)arg1;	// IMP=0x000000000000cf33
- (id)_stringifiedPropertiesForEvent:(id)arg1 propertyValueArray:(id)arg2;	// IMP=0x000000000000cd04
- (_Bool)_validatePropertyValues:(id)arg1;	// IMP=0x000000000000cb41
- (id)_keyMetadataForEvent:(id)arg1;	// IMP=0x000000000000cb39
- (void)_setValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4;	// IMP=0x000000000000cabe
- (void)_logValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4;	// IMP=0x000000000000ca43
- (void)_trackEvent:(id)arg1 withPropertyValues:(id)arg2 value:(id)arg3 overwrite:(_Bool)arg4;	// IMP=0x000000000000c615
- (void)_trackEvent:(id)arg1 withPropertyValues:(id)arg2 value:(id)arg3;	// IMP=0x000000000000c600
- (void)_checkPropertySubsets:(id)arg1;	// IMP=0x000000000000c064
- (void)_checkKeyLengthForEvent:(id)arg1 metaData:(id)arg2;	// IMP=0x000000000000bc75
- (void)_checkCardinalityForEvent:(id)arg1;	// IMP=0x000000000000ba7c
- (id)_defaultLoggingOutlet;	// IMP=0x000000000000ba63
- (id)initWithFeatureId:(id)arg1 registerProperties:(id)arg2 propertySubsets:(id)arg3;	// IMP=0x000000000000b89c

@end

