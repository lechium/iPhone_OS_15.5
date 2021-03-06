//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUPhotoPickerFileSizeToolbarProvider, PUPhotoPickerResizeTaskDescriptor, UIViewController;

@protocol PUPhotoPickerFileSizeToolbarProviderDelegate <NSObject>

@optional
- (void)photoPickerFileSizeToolbarProvider:(PUPhotoPickerFileSizeToolbarProvider *)arg1 didSelectResizeTaskDescriptor:(PUPhotoPickerResizeTaskDescriptor *)arg2;
- (void)photoPickerFileSizeToolbarProvider:(PUPhotoPickerFileSizeToolbarProvider *)arg1 presentSizePickerViewController:(UIViewController *)arg2;
@end

