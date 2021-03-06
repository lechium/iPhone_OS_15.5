//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIMenu, UIViewController;
@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface _UIFulfilledContextMenuConfiguration : NSObject
{
    id <NSCopying> _identifier;	// 8 = 0x8
    UIViewController *_previewViewController;	// 16 = 0x10
    UIMenu *_menu;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000116baa1
@property(copy, nonatomic) UIMenu *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) UIViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
@property(copy, nonatomic) id <NSCopying> identifier; // @synthesize identifier=_identifier;
- (_Bool)isPresentable;	// IMP=0x000000000116b984

@end

