//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface UIWKAutocorrectionContext : NSObject
{
    NSString *_contextBeforeSelection;	// 8 = 0x8
    NSString *_selectedText;	// 16 = 0x10
    NSString *_contextAfterSelection;	// 24 = 0x18
    NSString *_markedText;	// 32 = 0x20
    struct _NSRange _rangeInMarkedText;	// 40 = 0x28
}

@property(nonatomic) struct _NSRange rangeInMarkedText; // @synthesize rangeInMarkedText=_rangeInMarkedText;
@property(copy, nonatomic) NSString *markedText; // @synthesize markedText=_markedText;
@property(copy, nonatomic) NSString *contextAfterSelection; // @synthesize contextAfterSelection=_contextAfterSelection;
@property(copy, nonatomic) NSString *selectedText; // @synthesize selectedText=_selectedText;
@property(copy, nonatomic) NSString *contextBeforeSelection; // @synthesize contextBeforeSelection=_contextBeforeSelection;
- (void)dealloc;	// IMP=0x000000000103f205

@end

