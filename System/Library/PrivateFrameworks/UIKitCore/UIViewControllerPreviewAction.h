//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSString;

@interface UIViewControllerPreviewAction : NSObject <NSCopying>
{
    NSString *_title;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
}

+ (id)actionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000540028
- (void).cxx_destruct;	// IMP=0x000000000054017f
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000540098
- (id)_initWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000053ff8a

@end
