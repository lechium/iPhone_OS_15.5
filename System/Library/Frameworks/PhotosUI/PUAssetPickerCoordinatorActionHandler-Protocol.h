//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSOrderedSet, PUAssetPickerCoordinator;

@protocol PUAssetPickerCoordinatorActionHandler <NSObject>
- (void)coordinator:(PUAssetPickerCoordinator *)arg1 didFinishPicking:(NSOrderedSet *)arg2;

@optional
- (void)coordinator:(PUAssetPickerCoordinator *)arg1 didRequestExpandedMessagesLayout:(_Bool)arg2;
@end

