//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ScreenshotServices/BSXPCCoding-Protocol.h>
#import <ScreenshotServices/SSLoggable-Protocol.h>

@class NSData, NSString;

@interface SSHarvestedApplicationDocument : NSObject <BSXPCCoding, SSLoggable>
{
    NSData *_PDFData;	// 8 = 0x8
    long long _PDFPage;	// 16 = 0x10
    struct CGRect _PDFVisibleRect;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000e1eb
@property(nonatomic) struct CGRect PDFVisibleRect; // @synthesize PDFVisibleRect=_PDFVisibleRect;
@property(nonatomic) long long PDFPage; // @synthesize PDFPage=_PDFPage;
@property(copy, nonatomic) NSData *PDFData; // @synthesize PDFData=_PDFData;
@property(readonly, nonatomic) NSString *loggableDescription;
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x000000000000df6b
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x000000000000de85

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
