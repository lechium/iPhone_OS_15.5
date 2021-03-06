//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol REBacktrackingTokenBuffer, REScriptParserDelegate;

@interface REScriptParser : NSObject
{
    id <REBacktrackingTokenBuffer> _buffer;	// 8 = 0x8
    id <REScriptParserDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001546d
@property(nonatomic) __weak id <REScriptParserDelegate> delegate; // @synthesize delegate=_delegate;
- (id)parse;	// IMP=0x00000000000151b7
- (id)initWithBacktrackingBuffer:(id)arg1;	// IMP=0x000000000001514c

@end

