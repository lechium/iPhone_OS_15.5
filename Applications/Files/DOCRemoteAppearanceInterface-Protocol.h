//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DOCAppearance;

@protocol DOCRemoteAppearanceInterface
- (void)updateEditingTo:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateAppearance:(DOCAppearance *)arg1 shouldFlushCA:(_Bool)arg2 completionBlock:(void (^)(void))arg3;
- (void)updateAppearance:(DOCAppearance *)arg1 completionBlock:(void (^)(void))arg2;
@end

