//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString, SSMutableURLRequestProperties;

@interface SUScriptURLRequest
{
    SSMutableURLRequestProperties *_requestProperties;	// 72 = 0x48
}

+ (void)initialize;	// IMP=0x00000000000ca0c5
+ (id)webScriptNameForKeyName:(id)arg1;	// IMP=0x00000000000c9ffc
- (id)scriptAttributeKeys;	// IMP=0x00000000000ca062
- (id)attributeKeys;	// IMP=0x00000000000ca050
@property(copy) id URLs;
@property(copy) NSString *URLBagKey;
@property(copy) NSNumber *timeoutInterval;
- (id)_className;	// IMP=0x00000000000c9a85
- (id)copyNativeRequestProperties;	// IMP=0x00000000000c9a34
- (void)dealloc;	// IMP=0x00000000000c99f2
- (id)initWithNativeRequestProperties:(id)arg1;	// IMP=0x00000000000c9981
- (id)init;	// IMP=0x00000000000c996d

@end

