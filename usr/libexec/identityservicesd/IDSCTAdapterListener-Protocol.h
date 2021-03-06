//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@protocol IDSCTSIM, IDSCTSimDeactivationInfo;

@protocol IDSCTAdapterListener <NSObject>

@optional
- (void)SIM:(id <IDSCTSIM>)arg1 didDeactivateWithInfo:(id <IDSCTSimDeactivationInfo>)arg2;
- (void)carrierBundleInformationDidChange;
- (void)SIM:(id <IDSCTSIM>)arg1 didUpdateRegistrationState:(_Bool)arg2;
- (void)SIMInformationDidChange;
@end

