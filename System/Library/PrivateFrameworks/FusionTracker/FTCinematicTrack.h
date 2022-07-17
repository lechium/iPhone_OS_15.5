//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FusionTracker/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface FTCinematicTrack : NSObject <NSSecureCoding>
{
    _Bool _isTapSpawned;	// 8 = 0x8
    _Bool _isHighPriority;	// 9 = 0x9
    float _boxConfidence;	// 12 = 0xc
    float _detectionConfidence;	// 16 = 0x10
    long long _identifier;	// 24 = 0x18
    unsigned long long _objectKind;	// 32 = 0x20
    NSDictionary *_metadata;	// 40 = 0x28
    unsigned long long _sourceObservationId;	// 48 = 0x30
    CDStruct_1b6d18a9 _lastDetectionTime;	// 56 = 0x38
    CDStruct_1b6d18a9 _lastTappedTime;	// 80 = 0x50
    struct CGRect _box;	// 104 = 0x68
}

+ (id)fromTrack:(shared_ptr_a265d236)arg1 isHighPriority:(_Bool)arg2;	// IMP=0x000000000000bbc0
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000bbb0
- (void).cxx_destruct;	// IMP=0x000000000000c000
@property unsigned long long sourceObservationId; // @synthesize sourceObservationId=_sourceObservationId;
@property(nonatomic) _Bool isHighPriority; // @synthesize isHighPriority=_isHighPriority;
@property(nonatomic) _Bool isTapSpawned; // @synthesize isTapSpawned=_isTapSpawned;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) CDStruct_1b6d18a9 lastTappedTime; // @synthesize lastTappedTime=_lastTappedTime;
@property(nonatomic) float detectionConfidence; // @synthesize detectionConfidence=_detectionConfidence;
@property(nonatomic) float boxConfidence; // @synthesize boxConfidence=_boxConfidence;
@property(nonatomic) CDStruct_1b6d18a9 lastDetectionTime; // @synthesize lastDetectionTime=_lastDetectionTime;
@property(nonatomic) unsigned long long objectKind; // @synthesize objectKind=_objectKind;
@property(nonatomic) struct CGRect box; // @synthesize box=_box;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000ba10
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b7f0
- (id)init;	// IMP=0x000000000000b740

@end
