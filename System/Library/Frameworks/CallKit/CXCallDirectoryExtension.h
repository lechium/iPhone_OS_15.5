//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallKit/NSSecureCoding-Protocol.h>

@class LSPlugInKitProxy, NSString;

@interface CXCallDirectoryExtension : NSObject <NSSecureCoding>
{
    _Bool _onlyExtensionInContainingApp;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    long long _priority;	// 32 = 0x20
    NSString *_localizedName;	// 40 = 0x28
    NSString *_localizedContainingAppName;	// 48 = 0x30
    LSPlugInKitProxy *_plugInKitProxy;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000049bf1
- (void).cxx_destruct;	// IMP=0x000000000004a195
@property(nonatomic, getter=isOnlyExtensionInContainingApp) _Bool onlyExtensionInContainingApp; // @synthesize onlyExtensionInContainingApp=_onlyExtensionInContainingApp;
@property(retain, nonatomic) LSPlugInKitProxy *plugInKitProxy; // @synthesize plugInKitProxy=_plugInKitProxy;
@property(copy, nonatomic) NSString *localizedContainingAppName; // @synthesize localizedContainingAppName=_localizedContainingAppName;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000049e6e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000049bf9
- (id)description;	// IMP=0x0000000000049b0d

@end
