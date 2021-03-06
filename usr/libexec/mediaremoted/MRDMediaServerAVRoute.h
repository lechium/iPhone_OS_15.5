//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRDAVRouteExtendedInfo, NSDictionary;

@interface MRDMediaServerAVRoute
{
    NSDictionary *_routeDescription;	// 8 = 0x8
    MRDAVRouteExtendedInfo *_extendedInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000005153e
- (_Bool)matchesUniqueIdentifier:(id)arg1;	// IMP=0x0010000000051521
- (id)extendedInfo;	// IMP=0x00100000000514c5
- (id)dictionary;	// IMP=0x00100000000514b0
- (_Bool)canBeDefaultSystemRoute;	// IMP=0x00100000000514a8
- (_Bool)canBeDefaultRoute;	// IMP=0x00100000000514a0
- (_Bool)isSpeakerRoute;	// IMP=0x0010000000051440
- (_Bool)isPicked;	// IMP=0x0010000000051271
- (_Bool)isOutputRoute;	// IMP=0x0010000000051269
- (_Bool)isInputRoute;	// IMP=0x0010000000051261
- (id)modelName;	// IMP=0x0010000000051211
- (id)type;	// IMP=0x00100000000511ea
- (id)name;	// IMP=0x00100000000511c3
- (id)uniqueIdentifier;	// IMP=0x001000000005119c
- (id)description;	// IMP=0x0010000000051120
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000510ba
- (unsigned long long)hash;	// IMP=0x0010000000050fb9
- (id)initWithDictionary:(id)arg1;	// IMP=0x0010000000050f3f

@end

