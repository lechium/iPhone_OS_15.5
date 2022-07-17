//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PrintKit/PKBrowserClientProtocol-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol PKPrinterBrowserDelegate;

@interface PKPrinterBrowser : NSObject <PKBrowserClientProtocol>
{
    unsigned char _originalCellFlag;	// 8 = 0x8
    unsigned char _originalWifiFlag;	// 9 = 0x9
    _Bool _delegateRespondsToProximityUpdate;	// 10 = 0xa
    id <PKPrinterBrowserDelegate> _delegate;	// 16 = 0x10
    NSXPCConnection *_pkBrowseConnection;	// 24 = 0x18
    NSMutableDictionary *_printers;	// 32 = 0x20
    NSMutableDictionary *_btDevices;	// 40 = 0x28
}

+ (id)browserWithDelegate:(id)arg1 infoDictionary:(id)arg2;	// IMP=0x000000000001bb47
+ (id)browserWithDelegate:(id)arg1;	// IMP=0x000000000001bb0a
@property(retain, nonatomic) NSMutableDictionary *btDevices; // @synthesize btDevices=_btDevices;
@property(retain, nonatomic) NSMutableDictionary *printers; // @synthesize printers=_printers;
@property(retain, nonatomic) NSXPCConnection *pkBrowseConnection; // @synthesize pkBrowseConnection=_pkBrowseConnection;
@property(nonatomic) id <PKPrinterBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)btlePrinterFound:(id)arg1;	// IMP=0x000000000001ca98
- (void)printerRemoved:(id)arg1 more:(_Bool)arg2;	// IMP=0x000000000001c930
- (void)printerAdded:(id)arg1 more:(_Bool)arg2;	// IMP=0x000000000001c352
- (void)btleRssiUpdated:(id)arg1 rssi:(id)arg2;	// IMP=0x000000000001bfc7
- (void)dealloc;	// IMP=0x000000000001bca8
- (id)initWithDelegate:(id)arg1 infoDictionary:(id)arg2;	// IMP=0x000000000001bb82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
