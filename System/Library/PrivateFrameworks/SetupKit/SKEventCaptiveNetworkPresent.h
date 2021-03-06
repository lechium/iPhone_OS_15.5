//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface SKEventCaptiveNetworkPresent
{
    NSString *_captiveInterfaceIdentifier;	// 24 = 0x18
    NSString *_captiveSSID;	// 32 = 0x20
    NSURL *_captiveURL;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000c275
@property(readonly, copy, nonatomic) NSURL *captiveURL; // @synthesize captiveURL=_captiveURL;
@property(readonly, copy, nonatomic) NSString *captiveSSID; // @synthesize captiveSSID=_captiveSSID;
@property(readonly, copy, nonatomic) NSString *captiveInterfaceIdentifier; // @synthesize captiveInterfaceIdentifier=_captiveInterfaceIdentifier;
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000000000c0ca
- (id)initWithCaptiveURL:(id)arg1 interfaceIdentifier:(id)arg2 ssid:(id)arg3;	// IMP=0x000000000000bfcc

@end

