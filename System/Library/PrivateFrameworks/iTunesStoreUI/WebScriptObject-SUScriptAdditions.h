//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/WebScriptObject.h>

@interface WebScriptObject (SUScriptAdditions)
- (id)safeValueForKey:(id)arg1;	// IMP=0x000000000006674d
- (id)safeCallWebScriptMethod:(id)arg1 withArguments:(id)arg2;	// IMP=0x000000000006673b
- (id)copyValuesForKeys:(id)arg1;	// IMP=0x0000000000066607
- (id)copyJSONDataWithContext:(struct OpaqueJSContext *)arg1;	// IMP=0x0000000000066529
- (id)copyDate;	// IMP=0x00000000000664df
- (id)copyArrayOrDictionaryWithContext:(struct OpaqueJSContext *)arg1;	// IMP=0x000000000006634c
- (id)copyArrayValueWithValidator:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;	// IMP=0x0000000000066260
@end
