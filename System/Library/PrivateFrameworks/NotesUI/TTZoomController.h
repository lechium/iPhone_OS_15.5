//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TTZoomController : NSObject
{
    double _zoomFactor;	// 8 = 0x8
    double _checklistZoomFactor;	// 16 = 0x10
}

@property(nonatomic) double checklistZoomFactor; // @synthesize checklistZoomFactor=_checklistZoomFactor;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
- (id)unzoomFont:(id)arg1;	// IMP=0x00000000000fdfc9
- (id)zoomFont:(id)arg1;	// IMP=0x00000000000fdf1e
- (id)reallyZoomAttributedString:(id)arg1 zoomDirection:(_Bool)arg2;	// IMP=0x00000000000fdd8e
- (id)unzoomAttributedString:(id)arg1;	// IMP=0x00000000000fdd7a
- (id)zoomAttributedString:(id)arg1;	// IMP=0x00000000000fdd63
- (id)reallyZoomAttributes:(id)arg1 zoomDirection:(_Bool)arg2;	// IMP=0x00000000000fdaf9
- (id)unzoomAttributes:(id)arg1;	// IMP=0x00000000000fdae5
- (id)zoomAttributes:(id)arg1;	// IMP=0x00000000000fdace
- (id)reallyZoomFontInAttributes:(id)arg1 zoomDirection:(_Bool)arg2;	// IMP=0x00000000000fd9e8
- (id)unzoomFontInAttributes:(id)arg1;	// IMP=0x00000000000fd9d4
- (id)zoomFontInAttributes:(id)arg1;	// IMP=0x00000000000fd9bd
- (id)init;	// IMP=0x00000000000fd973

@end

