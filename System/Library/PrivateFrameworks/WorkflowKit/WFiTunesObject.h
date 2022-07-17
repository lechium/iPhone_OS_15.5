//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/MTLJSONSerializing-Protocol.h>
#import <WorkflowKit/NSSecureCoding-Protocol.h>
#import <WorkflowKit/WFNaming-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface WFiTunesObject <MTLJSONSerializing, NSSecureCoding, WFNaming>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_kind;	// 24 = 0x18
    NSString *_censoredName;	// 32 = 0x20
    NSURL *_viewURL;	// 40 = 0x28
    NSDictionary *_artworkURLs;	// 48 = 0x30
}

+ (Class)classForParsingJSONDictionary:(id)arg1;	// IMP=0x000000000025f3ba
+ (id)artworkURLsJSONTransformer;	// IMP=0x000000000025f393
+ (id)releaseDateJSONTransformer;	// IMP=0x000000000025f2da
+ (id)artistIDJSONTransformer;	// IMP=0x000000000025f2c8
+ (id)identifierJSONTransformer;	// IMP=0x000000000025f2a8
+ (id)JSONKeyPathsByPropertyKey;	// IMP=0x000000000025f232
+ (id)allowedSecureCodingClassesByPropertyKey;	// IMP=0x000000000025f124
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000025f11c
- (void).cxx_destruct;	// IMP=0x000000000025f0a7
@property(readonly, nonatomic) NSDictionary *artworkURLs; // @synthesize artworkURLs=_artworkURLs;
@property(readonly, nonatomic) NSURL *viewURL; // @synthesize viewURL=_viewURL;
@property(readonly, nonatomic) NSString *censoredName; // @synthesize censoredName=_censoredName;
@property(retain, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)initWithName:(id)arg1 identifier:(id)arg2 kind:(id)arg3;	// IMP=0x000000000025ef1d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
