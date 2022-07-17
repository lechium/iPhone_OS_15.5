//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _DKObject;

@interface _DKRelation
{
    NSString *_verbPhrase;	// 8 = 0x8
    _DKObject *_subject;	// 16 = 0x10
    _DKObject *_object;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000120a59
+ (id)relationWithSubject:(id)arg1 verbPhrase:(id)arg2 object:(id)arg3;	// IMP=0x00000000001208c1
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(_Bool)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4;	// IMP=0x000000000011fb42
+ (id)entityName;	// IMP=0x000000000011fb35
- (void).cxx_destruct;	// IMP=0x0000000000120e3b
@property(readonly) _DKObject *object; // @synthesize object=_object;
@property(readonly) _DKObject *subject; // @synthesize subject=_subject;
@property(readonly) NSString *verbPhrase; // @synthesize verbPhrase=_verbPhrase;
- (id)stringValue;	// IMP=0x0000000000120d3c
- (id)description;	// IMP=0x0000000000120c56
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000120b9c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000120a61
- (id)initWithSubject:(id)arg1 verbPhrase:(id)arg2 object:(id)arg3;	// IMP=0x000000000012094f
- (_Bool)copyToManagedObject:(id)arg1;	// IMP=0x000000000011fd90

@end
