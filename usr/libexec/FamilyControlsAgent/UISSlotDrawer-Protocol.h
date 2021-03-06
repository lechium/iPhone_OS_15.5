//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class UISSlotStyle;
@protocol UISDrawing;

@protocol UISSlotDrawer <NSObject>
- (id <UISDrawing>)drawingWithStyle:(UISSlotStyle *)arg1 tag:(id)arg2 forRemote:(_Bool)arg3;
- (unsigned long long)hitTestInformationMaskForStyle:(UISSlotStyle *)arg1 tag:(id)arg2;
- (unsigned long long)authenticationMessageContextForStyle:(UISSlotStyle *)arg1 tag:(id)arg2;
- (UISSlotStyle *)resolvedStyleForStyle:(UISSlotStyle *)arg1 tag:(id)arg2;
@end

