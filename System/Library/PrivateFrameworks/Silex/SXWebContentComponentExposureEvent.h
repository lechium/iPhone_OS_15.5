//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface SXWebContentComponentExposureEvent
{
    NSString *_componentIdentifier;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    NSString *_exposureIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000140359
@property(readonly, nonatomic) NSString *exposureIdentifier; // @synthesize exposureIdentifier=_exposureIdentifier;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
- (id)initWithComponent:(id)arg1;	// IMP=0x000000000014021c

@end

