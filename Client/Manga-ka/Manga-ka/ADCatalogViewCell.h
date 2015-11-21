//
//  ADCatalogViewCell.h
//  Manga-ka
//
//  Created by Anh Dang on 11/20/15.
//  Copyright © 2015 Anh Dang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ADCatalogViewCell : UICollectionViewCell
@property (strong, nonatomic) IBOutlet UIImageView* mangaImage;
@property (strong, nonatomic) IBOutlet UILabel*     mangaTitle;
@property (strong, nonatomic) IBOutlet UILabel*     mangaSub;
- (void)relayout;
@end
