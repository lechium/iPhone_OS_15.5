//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface SignpostSupportSerializabledObjectCollection : NSObject
{
    NSArray *_objectArray;	// 8 = 0x8
    NSNumber *_formatVersion;	// 16 = 0x10
    unsigned long long _machContinuousTimeFirst;	// 24 = 0x18
    unsigned long long _machContinuousTimeLast;	// 32 = 0x20
}

+ (_Bool)enumerateSignpostSupportObjectsInSerializedCollection:(id)arg1 processingBlock:(CDUnknownBlockType)arg2 errorOut:(id *)arg3;	// IMP=0x0000000000010d7d
+ (_Bool)_enumerateSignpostObjectsInDeserializedCollectionDictionary:(id)arg1 processingBlock:(CDUnknownBlockType)arg2 errorOut:(id *)arg3;	// IMP=0x0000000000010861
+ (_Bool)timeRangeForSerializedCollection:(id)arg1 continuousTimeFirstOut:(unsigned long long *)arg2 continuousTimeLastOut:(unsigned long long *)arg3 errorOut:(id *)arg4;	// IMP=0x00000000000106e1
+ (id)_deserializedDictionaryForData:(id)arg1 errorOut:(id *)arg2;	// IMP=0x000000000000ffd6
+ (_Bool)_versionIsSupported:(id)arg1;	// IMP=0x000000000000fca1
- (void).cxx_destruct;	// IMP=0x0000000000010f1f
@property(readonly, nonatomic) unsigned long long machContinuousTimeLast; // @synthesize machContinuousTimeLast=_machContinuousTimeLast;
@property(readonly, nonatomic) unsigned long long machContinuousTimeFirst; // @synthesize machContinuousTimeFirst=_machContinuousTimeFirst;
@property(readonly, nonatomic) NSNumber *formatVersion; // @synthesize formatVersion=_formatVersion;
@property(readonly, nonatomic) NSArray *objectArray; // @synthesize objectArray=_objectArray;
- (id)initWithData:(id)arg1 errorOut:(id *)arg2;	// IMP=0x0000000000010379
- (id)newSerializedCollection:(_Bool)arg1;	// IMP=0x000000000000fcbd
- (id)initWithSerializeableObjectArray:(id)arg1;	// IMP=0x000000000000fb7f

@end

