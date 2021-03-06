//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASDBundle, NSError;

@interface NotifyTestFlightClientTask
{
    ASDBundle *_bundle;	// 8 = 0x8
    long long _installPhase;	// 16 = 0x10
    NSError *_installError;	// 24 = 0x18
}

+ (id)taskForAppInstallPhase:(long long)arg1 bundle:(id)arg2 error:(id)arg3;	// IMP=0x004000000020e548
- (void).cxx_destruct;	// IMP=0x002000000020eaa7
@property(readonly, nonatomic) NSError *installError; // @synthesize installError=_installError;
@property(readonly, nonatomic) long long installPhase; // @synthesize installPhase=_installPhase;
@property(readonly, nonatomic) ASDBundle *bundle; // @synthesize bundle=_bundle;
- (void)main;	// IMP=0x001000000020e608

@end

