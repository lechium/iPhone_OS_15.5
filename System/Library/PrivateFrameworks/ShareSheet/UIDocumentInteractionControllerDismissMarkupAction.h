//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface UIDocumentInteractionControllerDismissMarkupAction : NSObject
{
    NSString *_title;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
}

+ (id)actionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007a200
- (void).cxx_destruct;	// IMP=0x000000000007a2a2
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007a15d

@end
