//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXAction-Protocol.h>

@class NSString, NSURL, SXJSONDictionary;

@interface SXWebCalAction : NSObject <SXAction>
{
    SXJSONDictionary *analytics;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d4cca
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) SXJSONDictionary *analytics; // @synthesize analytics;
@property(readonly, nonatomic) NSString *type;
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000d4c37

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

