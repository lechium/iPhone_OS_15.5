//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/MFReader-Protocol.h>

@class EMFPlayer, NSString;

__attribute__((visibility("hidden")))
@interface EMFReader : NSObject <MFReader>
{
    EMFPlayer *m_player;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000036403d
- (int)play:(id)arg1;	// IMP=0x00000000001575f2
- (id)initWithEMFPlayer:(id)arg1;	// IMP=0x00000000001575d3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

