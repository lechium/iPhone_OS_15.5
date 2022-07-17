//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXAction-Protocol.h>

@class NSString, SXJSONDictionary;

@interface SXPhoneNumberAction : NSObject <SXAction>
{
    SXJSONDictionary *analytics;	// 8 = 0x8
    NSString *_phoneNumber;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000109d8e
@property(readonly, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, nonatomic) SXJSONDictionary *analytics; // @synthesize analytics;
@property(readonly, nonatomic) NSString *type;
- (id)initWithPhoneNumber:(id)arg1;	// IMP=0x0000000000109cfb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
