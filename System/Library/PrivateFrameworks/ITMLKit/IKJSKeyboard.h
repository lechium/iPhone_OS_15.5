//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSKeyboard-Protocol.h>
#import <ITMLKit/_IKJSKeyboard-Protocol.h>
#import <ITMLKit/_IKJSKeyboardProxy-Protocol.h>

@class JSValue, NSString;
@protocol IKAppKeyboardBridge;

@interface IKJSKeyboard <IKJSKeyboard, _IKJSKeyboardProxy, _IKJSKeyboard>
{
    id <IKAppKeyboardBridge> _appBridge;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000252a6
@property(retain, nonatomic) id <IKAppKeyboardBridge> appBridge; // @synthesize appBridge=_appBridge;
- (void)jsDidSelectHint:(id)arg1;	// IMP=0x00000000000251b0
- (void)jsTextDidChange;	// IMP=0x000000000002502a
@property(copy, nonatomic) JSValue *hints;
@property(copy, nonatomic) JSValue *suggestions;
@property(copy, nonatomic) NSString *text;
- (id)asPrivateIKJSKeyboard;	// IMP=0x0000000000024db1

@end

