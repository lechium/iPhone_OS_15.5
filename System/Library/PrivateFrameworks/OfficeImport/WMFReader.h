//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/MFReader-Protocol.h>

@class NSString, WMFPlayer;

__attribute__((visibility("hidden")))
@interface WMFReader : NSObject <MFReader>
{
    int m_recordsRead;	// 8 = 0x8
    WMFPlayer *m_player;	// 16 = 0x10
    unsigned int m_length;	// 24 = 0x18
    const char *m_pBuffer;	// 32 = 0x20
    unsigned int m_cursor;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003766b3
- (int)moveDataCursor:(unsigned int)arg1;	// IMP=0x00000000000f7087
- (int)checkBytesAvailable:(unsigned int)arg1;	// IMP=0x00000000000f6ddd
- (int)playRecord;	// IMP=0x00000000000f7098
- (int)playHeaders;	// IMP=0x00000000000f6d3e
- (int)play:(id)arg1;	// IMP=0x00000000000f6c37
- (id)initWithWMFPlayer:(id)arg1;	// IMP=0x00000000000f6c18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
