//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DrawingKit/NSObject-Protocol.h>

@class NSObject;
@protocol DKInkRenderer;

@protocol DKInkRendererDelegate <NSObject>

@optional
- (void)inkDidCompleteRender:(NSObject<DKInkRenderer> *)arg1;
- (void)inkDidRender:(NSObject<DKInkRenderer> *)arg1;
@end

