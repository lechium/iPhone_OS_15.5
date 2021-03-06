//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationLegacySupport-Protocol.h>
#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NEProxyServer, NSArray, NSString, NSURL;

@interface NEProxySettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    NEProxyServer *_HTTPServer;	// 8 = 0x8
    NEProxyServer *_HTTPSServer;	// 16 = 0x10
    _Bool _autoProxyConfigurationEnabled;	// 24 = 0x18
    _Bool _HTTPEnabled;	// 25 = 0x19
    _Bool _HTTPSEnabled;	// 26 = 0x1a
    _Bool _excludeSimpleHostnames;	// 27 = 0x1b
    _Bool _autoProxyDiscovery;	// 28 = 0x1c
    _Bool _FTPEnabled;	// 29 = 0x1d
    _Bool _SOCKSEnabled;	// 30 = 0x1e
    _Bool _RTSPEnabled;	// 31 = 0x1f
    _Bool _gopherEnabled;	// 32 = 0x20
    _Bool _usePassiveFTP;	// 33 = 0x21
    NSArray *_exceptionList;	// 40 = 0x28
    NSURL *_proxyAutoConfigURL;	// 48 = 0x30
    NSString *_proxyAutoConfigJavaScript;	// 56 = 0x38
    NEProxyServer *_FTPServer;	// 64 = 0x40
    NEProxyServer *_SOCKSServer;	// 72 = 0x48
    NEProxyServer *_RTSPServer;	// 80 = 0x50
    NEProxyServer *_gopherServer;	// 88 = 0x58
    NSArray *_supplementalMatchDomains;	// 96 = 0x60
    NSArray *_supplementalMatchOrders;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000017c9bc
- (void).cxx_destruct;	// IMP=0x0000000000180fd7
@property(copy) NSArray *supplementalMatchOrders; // @synthesize supplementalMatchOrders=_supplementalMatchOrders;
@property(copy) NSArray *supplementalMatchDomains; // @synthesize supplementalMatchDomains=_supplementalMatchDomains;
@property _Bool usePassiveFTP; // @synthesize usePassiveFTP=_usePassiveFTP;
@property(copy) NEProxyServer *gopherServer; // @synthesize gopherServer=_gopherServer;
@property _Bool gopherEnabled; // @synthesize gopherEnabled=_gopherEnabled;
@property(copy) NEProxyServer *RTSPServer; // @synthesize RTSPServer=_RTSPServer;
@property _Bool RTSPEnabled; // @synthesize RTSPEnabled=_RTSPEnabled;
@property(copy) NEProxyServer *SOCKSServer; // @synthesize SOCKSServer=_SOCKSServer;
@property _Bool SOCKSEnabled; // @synthesize SOCKSEnabled=_SOCKSEnabled;
@property(copy) NEProxyServer *FTPServer; // @synthesize FTPServer=_FTPServer;
@property _Bool FTPEnabled; // @synthesize FTPEnabled=_FTPEnabled;
@property(copy) NSString *proxyAutoConfigJavaScript; // @synthesize proxyAutoConfigJavaScript=_proxyAutoConfigJavaScript;
@property(copy) NSURL *proxyAutoConfigURL; // @synthesize proxyAutoConfigURL=_proxyAutoConfigURL;
@property _Bool autoProxyDiscovery; // @synthesize autoProxyDiscovery=_autoProxyDiscovery;
@property(copy) NSArray *exceptionList; // @synthesize exceptionList=_exceptionList;
@property _Bool excludeSimpleHostnames; // @synthesize excludeSimpleHostnames=_excludeSimpleHostnames;
@property _Bool HTTPSEnabled; // @synthesize HTTPSEnabled=_HTTPSEnabled;
@property _Bool HTTPEnabled; // @synthesize HTTPEnabled=_HTTPEnabled;
@property _Bool autoProxyConfigurationEnabled; // @synthesize autoProxyConfigurationEnabled=_autoProxyConfigurationEnabled;
@property(readonly, nonatomic) _Bool useForAllDomains;
@property(readonly) _Bool enabled;
@property(copy) NEProxyServer *HTTPSServer;
@property(copy) NEProxyServer *HTTPServer;
@property(copy) NSArray *matchDomains;
@property(copy) NSString *proxyAutoConfigurationJavaScript;
@property(copy) NSURL *proxyAutoConfigurationURL;
- (void)copyPasswordsFromKeychain;	// IMP=0x0000000000180670
- (void)removeKeychainItems;	// IMP=0x0000000000180553
- (_Bool)needToUpdateKeychain;	// IMP=0x00000000001803f2
- (void)syncWithKeychain;	// IMP=0x00000000001802d5
- (id)initFromLegacyDictionary:(id)arg1;	// IMP=0x000000000017f0bf
- (id)copyLegacyDictionary;	// IMP=0x000000000017e279
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000017dd09
- (_Bool)checkValidityAndCollectErrors:(id)arg1;	// IMP=0x000000000017d5ce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017d260
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000017ce6b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017c9fc
- (id)init;	// IMP=0x000000000017c9c4

@end

