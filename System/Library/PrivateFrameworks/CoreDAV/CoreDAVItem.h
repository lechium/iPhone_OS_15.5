//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDAV/CoreDAVItem-Protocol.h>

@class NSData, NSMutableArray, NSMutableSet, NSString;

@interface CoreDAVItem : NSObject <CoreDAVItem>
{
    NSString *_name;	// 8 = 0x8
    NSString *_nameSpace;	// 16 = 0x10
    NSMutableSet *_attributes;	// 24 = 0x18
    NSMutableArray *_extraChildItems;	// 32 = 0x20
    NSData *_payload;	// 40 = 0x28
    _Bool _useCDATA;	// 48 = 0x30
}

+ (id)parseRuleCache;	// IMP=0x0000000000051ecb
+ (id)copyParseRules;	// IMP=0x0000000000051ea9
- (void).cxx_destruct;	// IMP=0x0000000000052562
@property(nonatomic) _Bool useCDATA; // @synthesize useCDATA=_useCDATA;
@property(retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSMutableArray *extraChildItems; // @synthesize extraChildItems=_extraChildItems;
@property(retain, nonatomic) NSMutableSet *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSString *nameSpace; // @synthesize nameSpace=_nameSpace;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)generateXMLString;	// IMP=0x0000000000052436
- (void)parserSuggestsBaseURL:(id)arg1;	// IMP=0x0000000000052430
- (void)setPayloadAsString:(id)arg1;	// IMP=0x00000000000523d9
- (long long)payloadAsNSInteger;	// IMP=0x000000000005238c
- (id)payloadAsString;	// IMP=0x000000000005231e
- (_Bool)validate;	// IMP=0x0000000000052316
- (void)write:(id)arg1;	// IMP=0x0000000000051ffd
- (id)childrenToWrite;	// IMP=0x0000000000051feb
- (void)parserFoundAttributes:(id)arg1;	// IMP=0x0000000000051fa4
- (void)parserFoundPayload:(id)arg1;	// IMP=0x0000000000051f92
- (void)parserFoundUnrecognizedElement:(id)arg1;	// IMP=0x0000000000051f20
- (id)copyParseRules;	// IMP=0x0000000000051eb1
- (id)hashString;	// IMP=0x0000000000051d00
@property(readonly, copy) NSString *description;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;	// IMP=0x0000000000051b4a
- (id)init;	// IMP=0x0000000000051b1f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

