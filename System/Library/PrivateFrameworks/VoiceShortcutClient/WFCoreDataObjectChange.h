//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface WFCoreDataObjectChange : NSObject
{
    NSString *_URIRepresentation;	// 8 = 0x8
    unsigned long long _objectType;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002b314
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long objectType; // @synthesize objectType=_objectType;
@property(readonly, nonatomic) NSString *URIRepresentation; // @synthesize URIRepresentation=_URIRepresentation;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002b0a2
- (unsigned long long)hash;	// IMP=0x000000000002b003
- (id)dictionaryRepresentation;	// IMP=0x000000000002ae8c
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x000000000002ad83
- (id)initWithObjectID:(id)arg1 objectType:(unsigned long long)arg2 identifier:(id)arg3;	// IMP=0x000000000002ac81

@end
