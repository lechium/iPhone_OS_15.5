//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXAction-Protocol.h>

@class NSString, SXJSONDictionary;

@interface SXEmailAction : NSObject <SXAction>
{
    SXJSONDictionary *analytics;	// 8 = 0x8
    NSString *_recipient;	// 16 = 0x10
    NSString *_subject;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000079486
@property(readonly, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) NSString *recipient; // @synthesize recipient=_recipient;
@property(readonly, nonatomic) SXJSONDictionary *analytics; // @synthesize analytics;
@property(readonly, nonatomic) NSString *type;
- (id)initWithRecipient:(id)arg1 subject:(id)arg2;	// IMP=0x00000000000793bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
