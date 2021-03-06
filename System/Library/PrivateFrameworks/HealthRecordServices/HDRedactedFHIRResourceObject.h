//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface HDRedactedFHIRResourceObject
{
    NSString *_resourceType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001067a
+ (id)resourceObjectWithFHIRJSONObject:(id)arg1 redactedJSONObject:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001050c
- (void).cxx_destruct;	// IMP=0x0000000000010897
@property(readonly, copy, nonatomic) NSString *resourceType; // @synthesize resourceType=_resourceType;
- (id)description;	// IMP=0x00000000000107d9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001071d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010682
- (id)_initWithResourceType:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 JSONObject:(id)arg4;	// IMP=0x0000000000010474

@end

