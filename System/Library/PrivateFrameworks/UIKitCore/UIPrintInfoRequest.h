//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKPrinter;

__attribute__((visibility("hidden")))
@interface UIPrintInfoRequest : NSObject
{
    PKPrinter *_printer;	// 8 = 0x8
    int _requestState;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

+ (id)requestInfoForPrinter:(id)arg1;	// IMP=0x0000000000ca29de
- (void).cxx_destruct;	// IMP=0x0000000000ca2bf4
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) int requestState; // @synthesize requestState=_requestState;
- (void)requestPrintInfo;	// IMP=0x0000000000ca2a4c

@end
