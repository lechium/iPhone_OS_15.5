//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSPlugInKitProxy, NSExtension, NSNumber, NSUUID;
@protocol PKPlugIn;

@interface IMBalloonAppExtension
{
    _Bool _canSendDataPayloads;	// 128 = 0x80
    _Bool _shouldBalloonHideAppIcon;	// 129 = 0x81
    NSExtension *_extension;	// 136 = 0x88
    LSPlugInKitProxy *_proxy;	// 144 = 0x90
    NSUUID *_requestIdentifier;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000000801af
@property(nonatomic) _Bool shouldBalloonHideAppIcon; // @synthesize shouldBalloonHideAppIcon=_shouldBalloonHideAppIcon;
@property(nonatomic) _Bool canSendDataPayloads; // @synthesize canSendDataPayloads=_canSendDataPayloads;
@property NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) LSPlugInKitProxy *proxy; // @synthesize proxy=_proxy;
@property(readonly, retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(readonly, retain, nonatomic) NSNumber *itemID;
@property(readonly, nonatomic) _Bool isLaunchProhibited;
@property(readonly, retain, nonatomic) id <PKPlugIn> plugin;
- (_Bool)isBetaPlugin;	// IMP=0x000000000007ff87
- (id)version;	// IMP=0x000000000007ff37
- (id)initWithPluginBundle:(id)arg1 appBundle:(id)arg2;	// IMP=0x000000000007fd5a
- (id)_initWithPluginBundle:(id)arg1 extension:(id)arg2 pluginKitProxyClass:(Class)arg3;	// IMP=0x000000000007fc66
- (id)initWithPluginBundle:(id)arg1 extension:(id)arg2;	// IMP=0x000000000007fbca
- (id)initWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3;	// IMP=0x000000000007faf1

@end
