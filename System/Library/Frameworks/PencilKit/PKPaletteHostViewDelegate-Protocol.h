//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/NSObject-Protocol.h>

@class UIView;

@protocol PKPaletteHostViewDelegate <NSObject>
- (void)hostView:(UIView *)arg1 didDockPaletteToPosition:(long long)arg2;
- (void)hostView:(UIView *)arg1 willDockPaletteToPosition:(long long)arg2 prepareForExpansion:(_Bool)arg3;
@end

