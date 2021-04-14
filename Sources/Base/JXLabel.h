//
//  JXLabel.h
//  JXCategoryView
//
//  Created by blackstone jericho on 2021/4/14.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

//! Project version number for JXLabel.
FOUNDATION_EXPORT double JXLabelVersionNumber;

//! Project version string for JXLabel.
FOUNDATION_EXPORT const unsigned char JXLabelVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <JXLabel/PublicHeader.h>


typedef NS_ENUM(NSInteger, JXLabelStrokePosition) {
    JXLabelStrokePositionOutside,
    JXLabelStrokePositionCenter,
    JXLabelStrokePositionInside
};

typedef NS_OPTIONS(NSUInteger, JXLabelFadeTruncatingMode) {
    JXLabelFadeTruncatingModeNone = 0,
    JXLabelFadeTruncatingModeTail = 1 << 0,
    JXLabelFadeTruncatingModeHead = 1 << 1,
    JXLabelFadeTruncatingModeHeadAndTail = JXLabelFadeTruncatingModeHead | JXLabelFadeTruncatingModeTail
};

@interface JXLabel : UILabel

@property (nonatomic, assign) CGFloat letterSpacing;
@property (nonatomic, assign) CGFloat lineSpacing;

@property (nonatomic, assign) CGFloat shadowBlur;

@property (nonatomic, assign) CGFloat innerShadowBlur;
@property (nonatomic, assign) CGSize innerShadowOffset;
@property (nonatomic, strong) UIColor *innerShadowColor;

@property (nonatomic, assign) CGFloat strokeSize;
@property (nonatomic, strong) UIColor *strokeColor;
@property (nonatomic, assign) JXLabelStrokePosition strokePosition;

@property (nonatomic, strong) UIColor *gradientStartColor;
@property (nonatomic, strong) UIColor *gradientEndColor;
@property (nonatomic, copy) NSArray *gradientColors;
@property (nonatomic, assign) CGPoint gradientStartPoint;
@property (nonatomic, assign) CGPoint gradientEndPoint;

@property (nonatomic, assign) JXLabelFadeTruncatingMode fadeTruncatingMode;

@property (nonatomic, assign) UIEdgeInsets textInsets;
@property (nonatomic, assign) BOOL automaticallyAdjustTextInsets;

@end

NS_ASSUME_NONNULL_END
